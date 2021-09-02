clc
clear
a = 1;
b = 1;
c = 0;
fprintf('_%i\t',a)
fprintf('_%i\t',b)
for k = [0:8];
    c = (a + b);
    fprintf('_%i\t',c)
    a = c;
    c = (a+b);
    fprintf('_%i\t',c)
    b = c;
end