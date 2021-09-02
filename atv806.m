clc
clear
%Programa para um campeonato de natação
tm=0;
melhor=99999999999;
pior=0;
for contador=1:8;
    x=input('Tempo de natação=');
    tm=tm+x;
    if melhor>x;
        melhor=x;
    else
        if pior<x;
            pior=x;
        end
    end
end
tm=tm/8;
fprintf('Tempo medio dos atletas=%f\n',tm)
fprintf('Tempo conseguido pelo melhor atletas=%f\n',melhor)
fprintf('Tempo medio conseguido pelo pior atletas=%f\n',pior)

