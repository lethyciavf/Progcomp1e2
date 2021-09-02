clear
clc
a=1;
k=0;
f=[14, 18, 8, 9, 13];
x=[0.013, 0.020, 0.009, 0.010, 0.012];

for i=1:5
    k(a)=f(a)/x(a);
    u(a)=(0.5*(k(a)))*((x(a))^2);
    a=a+1;
    %disp(k1,k2,k3,k4,k5);
    %disp(u1,u2,u3,u4,u5);
end
kv=[k(1),k(2),k(3),k(4),k(5)];
uv=[u(1),u(2),u(3),u(4),u(5)];
disp(f);
disp(x);
disp(kv);
disp(uv);
T=table([f(1),f(2),f(3),f(4),f(5)],[x(1),x(2),x(3),x(4),x(5)],[kv(1),kv(2),kv(3),kv(4),kv(5)],[uv(1),uv(2),uv(3),uv(4),uv(5)], 'VariableNames', {'F', 'X', 'K', 'U'});
disp(T);