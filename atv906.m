clc          
clear
%Programa para controle do caixa volume
%Entrada:leitura do codigo do produto
%sa�da:codigo do produto;pre�o;quantidade;total;troco;quantidade a ser paga pelo do cliente
%Inicializa��o de variaveis
x=0;
codigo=0;
preco=1;
quantidade=0;
total=0;
pagamento=0;
troco=0;
%Objetivo:
%Vendas de mercadorias
%para encerrar,digite (0)no pre�o
%La�o para come�ar as compras das mercadorias

  while preco>0;
      %L� o primeiro produto
     codigo=input('Codigo do produto=');
     %L� o pre�o do produto
     preco=input('Pre�o unitario do produto=');
     %L� a quantidade(s)de produto
     quantidade=input('Quantidade(s)do pruduto');
     %L� o tatal da compra
     x=preco*quantidade;
     % Encerrar o la�o para compras das mercadorias
     total=total+x;
  end
  % Encerrar o la�o para compras das mercadorias
  %Mostrar na tela o total das vendas
     fprintf('Total da venda%i\n',total)
     %Mostrar na tela o pagamento do cliente
     pagamento=input('Recebeu=',pagamento);
     %calculo do troco do cliente
     troco=total-pagamento;
     %Mostrar na tela o retorno do pagamento ao cliente
     fprintf('Total de troco=%i\n',troco)
     %proxima venda
     

    %Final do la�o do programa