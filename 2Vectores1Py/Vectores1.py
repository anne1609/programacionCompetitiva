def  vectores():
    a=int(input())
    b=int(input())
    n=int(input())
    suma=0    
    for i in range(n):
        nro=int(input())
        if nro>=a and nro<=b:
           suma=suma+nro 
    
    print(suma)
    
if __name__ == "__main__":   
    vectores()