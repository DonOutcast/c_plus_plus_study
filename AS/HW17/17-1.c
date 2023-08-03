// Создайте структуру для хранения данных об организации (Организационно-правовая форма,
//  Название, ИНН, адрес (индекс, город, улица, номер дома, номер офиса)). Программа
//   должна запрашивать ввод данных о контакте с клавиатуры и выводить на экран формате:
// ИНН <данные из структуры>
// <Организационно-правовая форма> <Название>
// Адрес: <индекс>,  город <город>,  улица <улица> дом <номер дома> офис <номер офиса>


#include <stdio.h>

struct Organization {
    char legalForm[50];
    char name[50];
    int inn;
    int index;
    char city[50];
    char street[50];
    int house;
    int office;
};

int main() {
    struct Organization org;

    printf("legal form: ");
    scanf("%s", org.legalForm);

    printf("Name: ");
    scanf("%s", org.name);

    printf("INN: ");
    scanf("%d", &org.inn);

    printf("Index: ");
    scanf("%d", &org.index);

    printf("City: ");
    scanf("%s", org.city);

    printf("Street: ");
    scanf("%s", org.street);

    printf("House: ");
    scanf("%d", &org.house);

    printf("Office: ");
    scanf("%d", &org.office);

    printf("INN: %d\n", org.inn);
    printf("%s %s\n", org.legalForm, org.name);
    printf("Adress: %d, %s city, %s street, house %d, office %d\n", org.index, org.city, org.street, org.house, org.office);

    return 0;
}
