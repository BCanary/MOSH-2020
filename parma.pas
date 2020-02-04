program dsa;
type point=record  //тип точка
           x,y:real;
           end;
const t=0.001;//точность сравнения вещественных чисел
var a,b,c,d:point;
var N, i: integer;
var arva: array[1..10] of string;
begin
readln(N);
for i:=1 to N do begin
readln(a.x,a.y,b.x,b.y,c.x,c.y,d.x,d.y);
//если прямые попарно вертикальны
if(((a.x=b.x)and(c.x=d.x)) or((a.x=c.x)and(b.x=d.x)) or((a.x=d.x)and(b.x=c.x))
//или угловые коэффициенты попарно равны
or((abs((a.y-b.y)/(a.x-b.x)-(c.y-d.y)/(c.x-d.x))<t))
or((abs((a.y-c.y)/(a.x-c.x)-(b.y-d.y)/(b.x-d.x))<t))
or((abs((a.y-d.y)/(a.x-d.x)-(b.y-c.y)/(b.x-c.x))<t)))
then arva[i] := 'YES'
else arva[i] := 'NO'
end;

for i := 1 to N do writeln(arva[i]);
end.