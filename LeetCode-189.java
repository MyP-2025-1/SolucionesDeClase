class Solution {
    public void rotate(int[] nums, int k) {
        //Defino n como el tamaño del arreglo.
        int n = nums.length;
        //Obtengo la primer posición a colocar un elemento.
        int kn = k % n;
        //Creo una copia del arreglo donde voy a almacenar los elementos temporalmente.
        int [] rotated = new int[nums.length];
        //Mi segundo pointer.
        int j = kn;
        for(int i = 0; i < n; i++) {
            //El jésimo es el iésimo si ya empezamos en kn.
            rotated[j++ % n] = nums[i];
        }
        //Se reemplazan en el arreglo original así como están en el rotated.
        for(int i = 0; i < n; i++) {
            nums[i] = rotated[i];
        }
        return;
    }
}
