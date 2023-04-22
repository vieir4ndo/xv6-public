# xv6-private<hr>

## TRABALHO 2<hr>
UFFS - Campus Chapecó - Curso de Ciência da Computação </br>
CCR: Sistemas Operacionais – 2022.2 </br>
Prof. Marco Aurélio Spohn </br>
Acadêmico: Matheus Vieira Santos </br>

### Objetivo geral <hr>
Desenvolver conhecimento e prática de implementação de um componente básico (i.e.,
escalonador de processos) em um sistema operacional didático.

### Plataforma <hr>
xv6 → http://pdos.csail.mit.edu/6.828/2012/xv6.html

### Modalidade <hr>
Individual

### Descrição do Trabalho II <hr>
Iimplementar o escalonador de processos stride scheduling (escalonamento em
passos largos). Semelhante ao escalonamento por loteria, cada processo recebe um número fixo de bilhetes
(tickets). Ao invés de utilizar um sorteio (abordagem probabilística), calcula-se o “passo” (stride) de cada
processo como sendo o resultado da divisão de um valor constante (e.g., 10.000) pelo número de bilhetes do
processo. Cada processo inicia com uma “passada inicial” igual a zero (0). O escalonador seleciona o
processo com o menor valor de passada atual; portanto, inicialmente qualquer um dos processos prontos
pode ser selecionado. Nesse caso, utiliza-se um critério qualquer para desempate (e.g., o processo com o
maior PID é selecionado). Após selecionado, a passada do processo é incrementada com o valor do “passo”
do processo. Por exemplo, assuma que há 3 processos, A, B e C, cada um com 100, 50 e 250 bilhetes,
respectivamente; portanto, A tem passo 100, B tem passo 200 e C tem passo 40. Caso o processo A seja
selecionado inicialmente, a sua passada é atualizada para 100. Em seguida B e C ainda tem passada zero.
Vamos assumir que B seja escalonado, atualizando sua passada para 200. Em seguida, o processo
necessariamente selecionado é o C (passada ainda é zero), fazendo sua passada ser atualizada para 40. Em
sequência, o processo C é selecionado mais duas vezes seguidas até atingir uma passada maior que o
processo A (passada = 100). Essa abordagem torna o escalonamento determinístico, concedendo
rapidamente uma fração da CPU correspondente ao número de bilhetes de cada processo.

### O que entregar<hr>
Código completo, incluindo códigos dos testes realizados e instruções
detalhadas para execução dos mesmos (em um arquivo nomeado LEIAME). Para reduzir o tamanho do
arquivo comprimido, exclua os arquivos objetos antes de comprimir (i.e., execute “make clean” para fazer a
limpeza antes de comprimir).

### Para rodar o projeto em um linux com arquitetura de 64 bit<hr>
#### Execute os comandos abaixo para instalar todas as dependências
```bash
sudo apt-get install qemu
sudo apt-get install build-essential
sudo apt-get install gcc-multilib
sudo apt install qemu-system-i386
```

#### Então, para executar o projeto, rode a partir da raiz
```bash
make clean
make
make qemu-nox
```

#### E pronto, a implementação do xv6 com escalonador stride schedule já está rodando, para testá-la e ter uma melhor visibilidade dos processos rodando de acordo com a quantidade de tickets execute:
```bash
schedulertest
```

#### Esse programa de usuário criará alguns processos para rodarem em segundo plano. Assim que os processos terminarem sua execução, serão exibidos logs no terminal de seus PIDs, suas quantidades de tickets, strides, stride final e também o número de vezes que os referidos foram sorteados no alogortimo.

#### Abaixo print demosntrando a saída esperada

![Screenshot from 2023-02-05 16-52-01](https://user-images.githubusercontent.com/55711103/216841547-b2cd8b4d-9b1d-4bb2-b7e5-485f2788d133.png)

