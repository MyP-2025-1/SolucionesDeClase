class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        #Si la ventana es de tamaño 0, no tiene sentido, de inmediato false.
        if k == 0:
            return False
        #Empiezo mi ventana vacía y fijo n como el tamaño del arreglo.
        window, n = set(), len(nums)
        #Para i -> 0,n
        for i in range(n):
            #Si la ventana ya contiene al iésimo elemento, entonces sí tiene un duplicado.
            if window.__contains__(nums[i]):
                return True
            #Si el tamaño de la ventana es k, entonces hay que eliminar al primer elemento.
            if len(window) == k:
                window.remove(nums[i-k])
            #Hay que agregar el siguiente elemento a la ventana.
            window.add(nums[i])
        #No hubo elemento en menos de tamaño k, False.
        return False
