int anniversaire(char name[], int age) {
     printf("Joyeux anniversaire %s\n", name);
     printf("tu es agé de %d ans\n", age);
}
int main(){
    char name[] = "matheo";
    int age = 15;

    anniversaire(name, age);
    return 0;
}
