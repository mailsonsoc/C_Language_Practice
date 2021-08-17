#include<stdio.h>

int main(){
	
	struct student{
		int nMatricula;
		char nome[30];
		float vMensalidade;
		char curso[30];
		char dataMatricula[30];
	};
	
	struct student stud1, *ptr_stud1;
	
	ptr_stud1=&stud1;
	printf("/n Informe matrícula: ");
	scanf("%d",&ptr_stud1->nMatricula);
	printf("/n Informe nome: ");
	scanf("%s",&ptr_stud1->nome);
	printf("/n Informe Mensalidade: ");
	scanf("%f",&ptr_stud1->vMensalidade);
	printf("/n Informe curso: ");
	scanf("%s",&ptr_stud1->curso);
	printf("/n Informe dataMatricula: ");
	scanf("%s",&ptr_stud1->dataMatricula);
	
	printf("\n **********CADASTRO ESTUDANTE**********");
	printf("\n No. Matricula = %d", ptr_stud1->nMatricula);
	printf("\n Nome = %s", ptr_stud1->nome);
	printf("\n Mensalidade = %9.2f", ptr_stud1->vMensalidade);
	printf("\n Curso = %s", ptr_stud1->curso);
	printf("\n Data da Matricula = %s", ptr_stud1->dataMatricula);
	
	char c = getchar();
}