#Will take hell lotta time to run on 10**34
#python is slow AF

def pal(num):
    n = str(num)
    for i in range(len(n)/2):
        if n[i] == n[len(n)-1-i]:
            continue
        return False
    return True


c = 0
div = 109
n = div*2
while n < 10**5:
    if pal(n):
        c = c + 1
    n = n + div

print c

    

