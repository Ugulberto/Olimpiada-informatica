try:
    while True:
        n = int(input())
        l = []
        for i in range(n):
            linea = input()
            l.append(linea[1])
        alante = 0
        medio = 0
        detras = 0
        puede = 0
        for i in l:
            if i.isnumeric():
                if not medio:
                    alante = int(i)
                    medio = 0
                else:
                    detras = int(i)
                    if alante < detras:
                        puede = 0
                    else:
                        puede = 1
                        break
            else:
                medio = 1
    if puede:
        print("Puede entrar", flush=True)
    else:
        print("No puede entrar", flush=True)
except:
    pass