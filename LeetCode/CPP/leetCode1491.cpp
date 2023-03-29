/**
 * 1491. Average Salary Excluding the Minimum and Maximum Salary
 * https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
*/
class Solution {
public:
    double average(vector<int>& salary) {
        // Segunda forma:
        /*
         * max_element y min_element, nos regresar un puntero
         * pero como solo deseamos su valor, tenemos que desreferenciarlo
        */
        int max=*max_element(salary.begin(),salary.end());
        int min=*min_element(salary.begin(),salary.end());
        // Sumamos todos los valores 
        int avg = accumulate(salary.begin(),salary.end(),0);
        //Calculamos lo solicitado
        return double(avg - max - min) / (salary.size() - 2);
        //Primera forma:
        //Ordenamos el vector, para que el menor y mayor valor estén en la posición correcta
        //sort(salary.begin(),salary.end()); // Ordenamos el vector
        //// sumamos todos los valores que no sean ni el mayor ni el menor
        //int avg = accumulate(salary.begin() + 1,salary.end() - 1,0);
        //return (double)avg / (salary.size() - 2);
    }
};
