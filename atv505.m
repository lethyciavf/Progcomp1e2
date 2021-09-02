clc
clear
a=0;
b=0;
c=0;
x=0;
re=0;
x=input('Digite a quantidade de alunos na turma:');
for contador = 1:x;
  
      a=input('digite a primeira nota=');
        if (a>=0 && a <=100)              
       b=input('digite a segunda nota=');
        else input('erro');
            return
       if (b>=0 & b <=100)
           return
           c=input('digite a terceira nota=');
           else  input('erro');
           if (c>=0 & c<=100)
           
               return
           end
       end
   end
   soma=(a+b+c)/3;
   re=soma+re
  if soma>=60
      fprintf('Aluno APROVADO%f\n',soma)
  else
      if soma>30 && soma<60
       fprintf('Aluno REPROVADO COM DIREITO A REAVALIAÇÃO\t%n',soma)   
      else
          if soma<30
              fprintf('Aluno REPROVADO%f\n',soma)
end
      end
  end
  end

re=re/x;
fprintf('RENDIMENTO DA TURMA=%f\t',re)