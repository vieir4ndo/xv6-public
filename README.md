# xv6-private<hr>

## TRABALHO 1<hr>
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

### Descrição do Trabalho I <hr>
Implementar o escalonador de processos baseado em loteria (lottery
scheduling). Na instanciação de um processo, deve-se passar ao sistema a quantidade de bilhetes
que o novo processo recebe. Caso o usuário não forneça esse dado, o sistema assume um número
default de bilhetes. Assumir também um número máximo de bilhetes que um processo pode receber

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

#### E pronto, a implementação do xv6 com escalonador lottery schedule já está rodando, para testá-la e ter uma melhor visibilidade dos processos rodando de acordo com a quantidade de tickets execute:
```bash
schedulertest
```

#### Esse programa de usuário criará alguns processos para rodarem em segundo plano. Assim que os processos terminarem sua execução, serão exibidos logs no terminal de seus PIDs, sua quantidades de tickets e também o número de vezes que os referidos foram sorteados no alogortimo.

#### Abaixo print demosntrando a saída esperada

![Screenshot from 2023-02-05 14-04-47](https://user-images.githubusercontent.com/55711103/216833549-1cf9fb30-bf26-4ab9-a30a-92d3f382e38b.png)

