// Создайте структуру для хранения данных об организации 
// (Организационно-правовая форма, Название, ИНН, адрес (индекс, город, улица, номер дома, номер офиса)).
// Программа должна запрашивать ввод данных о контакте с клавиатуры и выводить на экран формате:
// ИНН <данные из структуры><Организационно-правовая форма> <Название>
// Адрес: <индекс>,  город <город>,  улица <улица> дом <номер дома> офис <номер офиса>
#include <stdio.h>
struct address{
    int index;
    char city[10];
    char street[10];
    int house_number;
    int office_number;
};
struct organization{
    char organizational_and_legal_form[10];
    char name[10];
    int INN;
    struct address organizational;
};
/*void print_info(struct organization){
   struct organization info;
   printf("Inn: %d\n",info.INN);
   printf("Organizational and legal form: %s\n",info.organizational_and_legal_form);
   printf("Name: %s\n",info.name);
   printf("Address: \n");
   printf("Index: %d\n",info.organizational.index);
   printf("City: %s\n",info.organizational.city);
   printf("Street: %s\n",info.organizational.street);
   printf("House number: %d\n",info.organizational.house_number);
   printf("Office number: %d\n",info.organizational.office_number);
}*/
int main(){
   struct organization info;
   printf("Enter organizational and legal form: ");
   scanf("%s",&info.organizational_and_legal_form);
   printf("Enter name: ");
   scanf("%s",&info.name);
   printf("Enter INN: ");
   scanf("%d",&info.INN);
   printf("Enter index: ");
   scanf("%d",&info.organizational.index);
   printf("Enter city: ");
   scanf("%s",&info.organizational.city);
   printf("Enter street: ");
   scanf("%s",&info.organizational.street);
   printf("Enter house number: ");
   scanf("%d",&info.organizational.house_number);
   printf("Enter office number: ");
   scanf("%d",&info.organizational.office_number);
   printf("Inn: %d\n",info.INN);
   printf("Organizational and legal form: %s\n",info.organizational_and_legal_form);
   printf("Name: %s\n",info.name);
   printf("Address: \n");
   printf("Index: %d\n",info.organizational.index);
   printf("City: %s\n",info.organizational.city);
   printf("Street: %s\n",info.organizational.street);
   printf("House number: %d\n",info.organizational.house_number);
   printf("Office number: %d\n",info.organizational.office_number);
   // print_info(info);
   return 0;
}