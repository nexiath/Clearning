int main(int argc, char **argv){
    float r, a, p;
    printf("entrez un radius\n");
    scanf("%f", &r);
    a = (r*r*M_PI);
    printf("L'aire est de : %f\n", a);
    p = (2*r*M_PI);
    printf("Le périmetre est de %f\n", p);
    
}
