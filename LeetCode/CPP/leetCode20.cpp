/**
 * 20. Valid Parentheses
 * https://leetcode.com/problems/valid-parentheses/description/
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> sol;
        int n = s.size();
        // Se n es impar, no se podrá cerrar todos los *parantheses*
        if(n % 2 != 0) return false;
        for(int i = 0; i < n; i++){
            // Se inserta al stack la abertura de un *paranthese*
            if(s[i] == '(' ||
               s[i] == '{' ||
               s[i] == '['){
                    sol.push(s[i]);
            }else{
                // Si la pila está vacia, caso errado, no se puede empezar por una
                // tapa de cierre
                if(sol.empty()) return false;
                //sacamos la tapa
                char c = sol.top();
                sol.pop();
                // La tapa  de cierre debería de concidir con la primera
                // tapa de apertura, en caso contrario se retorna false
                if((s[i]==')' && c=='(') || (s[i]=='}' && c=='{') || (s[i]==']' && c=='['))
                    continue;
                else return false;
            }
        }
        // Para este momento el *stack* debería estar vacio, caso contrario no se cerrarón
        // todas los *parantheses*
        return sol.empty();
    }
};
