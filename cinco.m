clear
clc
aluno=0;
p1=0;
p2=0;
p3=0;
p4=0;
total=0;
result=0;
for i=[1:41];
    for j=[1:1];
        aluno=input('Digite a matricula do aluno: ');
        p1=input('Nota da primeira prova: ');
        p2=input('Nota da segunda prova: ');
        p3=input('Nota da terceira prova: ');
        p4=input('Nota da quarta prova: ');
        total=p1+p2+p3+p4;
        if total >= 70;
            result = true;
        else
            result = false;
        end
    end
end
 m=[aluno p1 p2 p3 p4 total result];
    disp(m)