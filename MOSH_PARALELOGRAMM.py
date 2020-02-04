def mod(num):
    if num < 0:
        return num * -1
    return num
N = int(input())
vivod = []
k = 0.001
for _ in range(0, N):
    ax,ay,bx,by,cx,cy,dx,dy = input().split(" ")
    ax = int(ax); ay = int(ay);
    cx = int(cx); cy = int(cy);
    bx = int(bx); by = int(by);
    dx = int(dx); dy = int(dy);
    if ( ((ax==bx)and(cx==dx)) or ((ax==cx)and(bx==dx)) or ((ax==dx)and(bx==cx)) or ((mod((ay - by)/(ax-bx)-(cy-dy)/(cx-dx)))<k) or ((mod((ay - cy)/(ax-cx)-(by-dy)/(bx-dx)))<k) or ((mod((ay - dy)/(ax-dx)-(by-cy)/(bx-cx)))<k)):
        vivod.append("YES")
    else:
        vivod.append("NO")
for i in vivod:
    print(i)
    
    
