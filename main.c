#include <stdio.h>
#include <stdlib.h>
#include "complexNumber.h"

main() 
{
int n, c;
Complex z, x, y;
double r, i, m, a;
do
{
printf("......................................NOMBRE COMPLEXE.........................................................\n");
printf("Pour creer un nombre complexe a partir de 2 reels entrez.....................................................1\n");
printf("Pour creer un nombre complexe a partir de son module et de son argument en radians entre pi et -pi entrez....2\n");
printf("Pour afficher la parie reelle du nombre complexe cree entrez.................................................3\n");
printf("Pour afficher la parie imaginaire du nombre complexe cree entrez.............................................4\n");
printf("Pour afficher le module du nombre complexe cree entrez.......................................................5\n");
printf("Pour afficher l argument du nombre complexe cree entrez......................................................6\n");
printf("Pour afficher le nombre complexe cree sous la forme algebrique entrez........................................7\n");
printf("Pour afficher le nombre complexe cree sous la forme geometrique enrez........................................8\n");
printf("Pour afficher l oppose du nombre complexe cree entrez........................................................9\n");
printf("Pour afficher le conjugue du nombre complexe cree entrez.....................................................10\n");
printf("Pour afficher l inverse du nombre complexe cree entrez.......................................................11\n");
printf("Pour afficher la puissance entiere du nombre complexe cree entrez............................................12\n");
printf("Pour faire l addition de 2 nombres complexes entrez..........................................................13\n");
printf("Pour faire la soustraction de 2 nombres complexes entrez.....................................................14\n");
printf("Pour faire la multiplication de 2 nombres complexes entrez...................................................15\n");
printf("Pour faire la division de 2 nombres complexes entrez.........................................................16\n");
printf("Pour terminer entrez.........................................................................................0\n");
printf("                                             Votre choix : ");
scanf("%d", &c);
system("cls");
switch(c)
{
	case 1: 
		printf("Entrez la partie reelle du nombre complexe : ");
	    scanf("%lf", &r);
	    printf("Entrez la partie imaginaire du nombre complexe : ");
	    scanf("%lf", &i);
	    z=create_alg(r, i);
	    break ;
	case 2 :
		printf("Entrez le module du nombre complexe : ");
	    scanf("%lf", &m);
	    printf("Entrez l argument du nombre complexe : ");
	    scanf("%lf", &a);
	    z=create_geom(m, a);
	    break;
	case 3 :
		printf("Le resultat demande est : %lf", real(z)); break;
	case 4 :
		printf("Le resultat demande est : %lf", img(z)); break;
	case 5 :
		printf("Le resultat demande est : %lf", modulus(z)); break;
	case 6 :
		printf("Le resultat demande est : (%lf)*pi", argument(z)/M_PI); break;
	case 7 :
		display_alg(z); break;
	case 8 :
		display_geom(z); break;
	case 9 :
		x=oppos(z);
		display_alg(x);
	    break;
	case 10 :
		x=conjug(z);
		display_alg(x);
		break;
	case 11 :
		x=inverse(z);
		display_alg(x);
	break;
	case 12 :
    	printf("Entrez la puissance entiere : ");
		scanf("%d", &n);
		x=power(z, n);
		display_alg(x);
		break;
	case 13 :
		printf("Entrez la partie reelle du premier nombre complexe : ");
		scanf("%lf", &r);
		printf("Entrez la partie imaginaire du premier nombre complexe : ");
		scanf("%lf", &i);
		z=create_alg(r, i);
		printf("Entrez la partie reelle du deuxieme nombre complexe : ");
		scanf("%lf", &r);
		printf("Entrez la partie imaginaire du deuxieme nombre complexe : ");
		scanf("%lf", &i);
		x=create_alg(r, i);
		y=add(z, x);
	    display_alg(y);
		break;
	case 14 :
		printf("Entrez la partie reelle du premier nombre complexe : ");
		scanf("%lf", &r);
	    printf("Entrez la partie imaginaire du premier nombre complexe : ");
		scanf("%lf", &i);
		z=create_alg(r, i);
		printf("Entrez la partie reelle du deuxieme nombre complexe : ");
		scanf("%lf", &r);
		printf("Entrez la partie imaginaire du deuxieme nombre complexe : ");
		scanf("%lf", &i);
		x=create_alg(r, i);
		y=sub(z, x);
		display_alg(y);
		break;
	case 15 :
		printf("Entrez la partie reelle du premier nombre complexe : ");
		scanf("%lf", &r);
		printf("Entrez la partie imaginaire du premier nombre complexe : ");
		scanf("%lf", &i);
		z=create_alg(r, i);
		printf("Entrez la partie reelle du deuxieme nombre complexe : ");
	    scanf("%lf", &r);
		printf("Entrez la partie imaginaire du deuxieme nombre complexe : ");
		scanf("%lf", &i);
		x=create_alg(r, i);
		y=mul(z, x);
		display_alg(y);
		break;
	case 16 :
		printf("Entrez la partie reelle du premier nombre complexe : ");
		scanf("%lf", &r);
	    printf("Entrez la partie imaginaire du premier nombre complexe : ");
		scanf("%lf", &i);
		z=create_alg(r, i);
		printf("Entrez la partie reelle du deuxieme nombre complexe : ");
		scanf("%lf", &r);
		printf("Entrez la partie imaginaire du deuxieme nombre complexe : ");
		scanf("%lf", &i);
		x=create_alg(r, i);
		y=divi(z, x);
		display_alg(y);
		break;
	case 0 :
		break;
	default :
		printf("\nChoix introuvable");
		break;
}
printf("\n\n\n");
}while(c!=0);
}
