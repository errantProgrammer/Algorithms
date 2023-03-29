/**
 * 443. String Compression
 * https://leetcode.com/problems/string-compression/description/
*/
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if(n == 0) return 0;

        int i = 0, j = 0,count = 1;
        char prevChar = chars[0];
        for(i = 1; i < n; i++){
            // Encontramos nuevo caracter
            if(chars[i] != prevChar){
                // Lo guardamos
                chars[j++] = prevChar;
                // Si no es mayor que 1, pues se sobre entiende 
                // Que ya tiene el valor de 1
                if(count > 1){
                    string countStr = to_string(count);
                    for(char ch : countStr){
                        chars[j++] = ch;
                    }
                }
                // Guardamos el nuevo valor
                prevChar = chars[i];
                count = 1;// Reiniciamos el contador
                continue;
            }
            // Seguimos contando hasta encontrar un nuevo caracter
            count++;
        }
        // Almacenamos el último caracter encontrado
        chars[j++] = prevChar;
        if(count > 1){
            string countStr = to_string(count);
            for(char ch : countStr){
                chars[j++] = ch;
            }
        }
        return j;
    }
};
