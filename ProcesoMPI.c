/* C Example */
/* ESCUELA POLITECNICA NACIONAL */
#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main (int argc, char* argv[])
{
  int rank, size,i,aleatorio;
  printf( "Hola a todos");
  MPI_Init (&argc, &argv);      /* starts MPI */
  MPI_Comm_rank (MPI_COMM_WORLD, &rank);        /* get current process id */
  MPI_Comm_size (MPI_COMM_WORLD, &size);        /* get number of processes */
	srand(time(NULL)+rank);
	aleatorio=(rand()%36)+1;
	printf( "Soy el proceso %d of %d y genero %d\n", rank, size,aleatorio);
  MPI_Finalize();
  return 0;
}
