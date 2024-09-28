#https://www.geeksforgeeks.org/maximum-profit-sale-wines/

def venda_rec(vinhos, i, j, ano):

    if (i == j):
        return vinhos[i] * ano
    else:
        esq = vinhos[i] * ano + venda_rec(vinhos, i + 1, j, ano + 1)
        dir = vinhos[j] * ano + venda_rec(vinhos, i, j - 1, ano + 1)
        return max(esq, dir)

def venda_pd(vinhos, i, j, ano, cache):

    if cache[i][j] == -1:
        if (i == j):
            cache[i][j] = vinhos[i] * ano
        else:
            esq = vinhos[i] * ano + venda_pd(vinhos, i + 1, j, ano + 1, cache)
            dir = vinhos[j] * ano + venda_pd(vinhos, i, j - 1, ano + 1, cache)
            cache[i][j] = max (esq, dir)
            cache[i][j] = max(esq, dir)
    return cache[i][j]

vinhos = [2, 4, 6, 2, 5]
#vinhos = [2, 4, 6, 2, 5, 7, 20, 4, 2, 7, 5, 8, 29, 41, 4, 1, 3, 5, 6, 9]

dimensao = len(vinhos)
mat = []
for i in range(dimensao):
    mat.append([-1] * dimensao)

print("rec: ", venda_rec(vinhos, 0, len(vinhos) - 1, 1))
print("dp:  ", venda_pd(vinhos, 0, len(vinhos) - 1, 1, mat))