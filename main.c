#include <stdio.h>
#include <math.h>

/*Ex 1*/

int comparaison() {
    int a, b;
    printf("saisir a=\n");
    scanf("%d", &a);
    printf("saisir b=\n");
    scanf("%d", &b);
    if (a < b)
        printf("b plus grand que a: %d\n", b);
    else
        printf("a plus grand que b: %d\n", a);
}

/*Ex 2*/

int airePerimetre() {
    int Aire, Perimetre, L, l;
    printf("saisir largeur, longueur:\n");
    scanf("%d",&l);
    scanf("%d",&L);
    Aire=l*L;
    Perimetre= 2*l + 2*L;
    printf("Aire du rectangle= %d\n", Aire);
    printf("Perimetre du rectangle= %d\n", Perimetre);
}

/*Ex 3*/

int mutiple_ou_superieur()    {
    int x;
    printf("saisir x=");
    scanf("%d", &x);
    if (x%3 == 0)
        printf("le nombre est multiple de 3\n");
    else
        printf("le nombre n'est pas multiple de 3\n");
    if (x>=10)
        printf("le nombre est superieur ou egale a 10\n");
}

/*Ex 4*/

int tarif() {
    int age, etudiant = 0;
    printf("Quel est votre age ?\n");
    scanf("%d", &age);
    if (age <= 12)
        printf("tarif enfant => 4 euros");
    else if (age >= 12 && age <= 17 || age >= 65)
        printf("tarif jeune/senior => 6 euros");
    else if (age >= 17 && age <= 27) {
        printf("Etes vous etudiant ? Si oui entrez 1, sinon 0");
        scanf("%d", &etudiant);
        if (etudiant == 1)
            printf("tarif etudiant=> 6 euros");
        else
            printf("tarif plein => 9 euros");
    } else
        printf("tarif plein => 9 euros");
}

/*Ex 5*/

int distrib() {
    int boisson, coca, ice_tea, orangina, cafe, the;
    boisson=0, coca=1, ice_tea=2, orangina=3, cafe=10, the=11;
    printf("choisir une boisson\n");
    scanf("%d", &boisson);
    if (boisson == 1)
            printf("coca");     /*affichage choix client*/
    else if (boisson == 2)
            printf("ice tea");  /*affichage choix client*/
    else if (boisson == 3)
            printf("orangina"); /*affichage choix client*/
    else if (boisson == 10)
            printf("cafe");    /*affichage choix client*/
    else if (boisson == 11)
            printf("the");  /*affichage choix client*/
    else
        printf("erreur");   /*nombre erroné*/
}

/*Ex 6*/

int moyenne() {
    float n1=0.0f, n2=0.0f, n3=0.0f;
    float moy=0.0f;     /*moy=moyenne*/
    do{                             /*boucle qui demande de rentrer une note valide*/
        printf("saisir 1ere note");
        scanf("%f", &n1);
    } while(n1>20 || n1<0);
    do{
        printf("saisir 2eme note");
        scanf("%f", &n2);
    } while(n2>20 || n2<0);
    do{
        printf("saisir 3eme note");
        scanf("%f", &n3);
    } while(n3>20 || n3<0);
    moy=(n1+n2+n3)/3;
    printf("moyenne des trois notes: %f\n", moy);
}

/*Ex n°7*/

int nombreEleve() {
    int classe, i,nombreEleve,total=0;
    printf("nombre de classe ?\n");
    scanf("%d", &classe);
    for(i=0; i<classe; i++)
        {printf("Nombre d'eleves pour la classe %d ?\n",i+1);
        scanf("%d", &nombreEleve);
        total=nombreEleve+total;
    }
    printf("total eleves = %d",total);
}

/*Ex n°8*/

int test_multiple_2_ou_7()  {
    int x=0;
    do {
        printf("saisir une valeur pour x\n");
        scanf("%d", &x);
    } while(x%7!=0 || x%2!=0);
    printf("la valeur %d est multiple de 2 et 7", x);

}

/*Ex n°9*/

int nombreEtage()   {
    int pierres=0, etages=0, i=1, comptagePierres=0;
    printf("Combien de pierres avez vous ?\n");
    scanf("%d", &pierres);
    do{
        comptagePierres=comptagePierres + i*i;      /*suite numérique modélisant le nombre de pierre nécessaire pour un étage*/
        i=i+1;
        if(comptagePierres<=pierres)
            etages = etages + 1;
        else if (comptagePierres > pierres)
            break;
    }
    while (comptagePierres < pierres);
    printf("La pyramide fera %d etages", etages);
}

/*Ex n°10*/

int moyenne2()  {
    int i=0, x, somme=0;
    float moyenne;
        do {
            i= i+1;
            printf("Entrez une valeur %d.\nPour stopper le programme, entrez une note NEGATIVE\n", i);
            scanf("%d", &x);
            if (x>=0)
                somme = somme + x;       /*On somme les notes entrées*/
            else
                break;
        }
        while(x>=0);
        moyenne = somme/(i-1);
        printf("Moyenne des notes = %f", moyenne);
}

int main() {
    //comparaison();
    //airePerimetre();
    //mutiple_ou_superieur();
    //tarif();
    //distrib();
    //moyenne();
    //nombreEleve();
    test_multiple_2_ou_7();
    //nombreEtage();
    //moyenne2();

}







