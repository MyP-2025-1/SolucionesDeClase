#define vi vector<int>

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //Vector de enteros donde se van a guardar los cuadrados en orden inverso.
        vi aux; 
        //Two-pointers
        int i = 0, j = nums.size()-1;
        while(i <= j) { //Mientras que los dos apuntadores no se hayan tocado.
            int sqi = nums[i]*nums[i]; //nums_i^2
            int sqj = nums[j]*nums[j]; //nums_j^2
            //Agrego al más grande y avanzo a la izquierda o a la derecha según sea el caso.
            if(sqi >= sqj) {
                aux.push_back(sqi);
                i++;
            } else {
                aux.push_back(sqj);
                j--;
            }
        }
        //Aquí irán los cuadrados ya ordenados, es decir, la reversa.
        vi squares;
        //Empiezo de atrás para adelante.
        for(int k = aux.size()-1; k >= 0; k--) {
            squares.push_back(aux[k]);
        }
        return squares;
    }
};
