from math import sqrt
def length(x1,y1, x2, y2):
    p1 = (x1-x2)
    p2 = (y1-y2)
    return sqrt(p1*p1 + p2*p2)

N = int(input())

vivod = []
for _ in range(0, N):
    f = input().split(" ");
    f = [int(x) for x in f]
    a = length(f[0], f[1], f[2], f[3])
    b = length(f[4], f[5], f[6], f[7])
    c = length(f[0], f[1], f[4], f[5])
    d = length(f[2], f[3], f[6], f[7])

    if((c/b) == (c/a)):
        vivod.append("YES");
    else:
        vivod.append("NO");

for i in vivod:
    print(i)
    
    
