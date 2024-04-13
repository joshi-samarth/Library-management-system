#include <iostream>
using namespace std;
class entry
{
protected:
    static int count;
    string name, address, phone, roll;

public:
    int id;
    string password;
    entry()
    {
        id = count;
        count++;
    }
    void getdata()
    {
        system("cls");

        cout << "enter the details"
             << endl;
        cout << "*****************" << endl;
        cout << "name :" << endl;
        cin >> name;
        cout << "address :" << endl;
        cin >> address;
        cout << "phone number:" << endl;
        cin >> phone;
        cout << "roll no :" << endl;
        cin >> roll;
        pass();
        cout << "id :" << id << endl;
        cout << "data inserted successfully.......!!!" << endl;
        getchar();
    }
    void putdata()
    {
        system("cls");
        cout << "DETAILS....." << endl;
        cout << "name         : " << name << endl
             << "address      : " << address << endl
             << "phone number : " << phone << endl
             << "roll no      : " << roll << endl
             << "id           : " << id << endl
             << endl;
        getchar();
    }
    void pass()
    {
        cout << "enter your password" << endl;
        cin >> password;
    }
    void edit()
    {
        system("cls");

        cout << "enter the details"
             << endl;
        cout << "*****************" << endl;
        cout << "name :" << endl;
        cin >> name;
        cout << "address :" << endl;
        cin >> address;
        cout << "phone number:" << endl;
        cin >> phone;
        cout << "roll no :" << endl;
        cin >> roll;
        int temp;
        cout << "do you want to change password" << endl;
        cout << "1.yes\n2.no" << endl;
        cin >> temp;
        if (temp == 1)
            pass();
        cout << "id :" << id << endl;
        cout << "data inserted successfully.......!!!" << endl;
        getchar();
    }
};

int entry::count = 1;
class book : public entry
{
protected:
    static int book1;
    static int book2;
    static int book3;
    static int book4;
    static int book5;

    int c = 0;
    int cpp = 0;
    int dms = 0;
    int cgr = 0;
    int java = 0;
    int day1 = 0;
    int day2 = 0;
    int day3 = 0;
    int day4 = 0;
    int day5 = 0;

public:
    books_avaliable()
    {
        cout << endl
             << endl
             << endl
             << endl;
        cout << "\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "\t\t\t\t\t=========================================" << endl;
        cout << "\t\t\t\t\t||  book name      ||     ||  quatity   ||" << endl;
        cout << "\t\t\t\t\t||--------------------------------------||" << endl;
        cout << "\t\t\t\t\t||  c++ book :     ||     ||     " << book1 << "      ||" << endl;
        cout << "\t\t\t\t\t||  c book :       ||     ||     " << book2 << "      ||" << endl;
        cout << "\t\t\t\t\t||  dms book :     ||     ||     " << book3 << "      ||" << endl;
        cout << "\t\t\t\t\t||  cgr book :     ||     ||     " << book4 << "      ||" << endl;
        cout << "\t\t\t\t\t||  java book :    ||     ||     " << book5 << "      ||" << endl;
        cout << "\t\t\t\t\t=========================================" << endl;
        cout << "\t\t\t\t\t-----------------------------------------" << endl;
        getchar();
    }

    void get_book()
    {
        system("cls");
        cout << endl
             << endl
             << endl
             << endl;
        cout << "\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "\t\t\t\t\t=========================================" << endl;
        cout << "\t\t\t\t\t||  book name      ||     ||  quatity   ||" << endl;
        cout << "\t\t\t\t\t||--------------------------------------||" << endl;
        cout << "\t\t\t\t\t||  c++ book :     ||     ||     " << book1 << "      ||" << endl;
        cout << "\t\t\t\t\t||  c book :       ||     ||     " << book2 << "      ||" << endl;
        cout << "\t\t\t\t\t||  dms book :     ||     ||     " << book3 << "      ||" << endl;
        cout << "\t\t\t\t\t||  cgr book :     ||     ||     " << book4 << "      ||" << endl;
        cout << "\t\t\t\t\t||  java book :    ||     ||     " << book5 << "      ||" << endl;
        cout << "\t\t\t\t\t=========================================" << endl;
        cout << "\t\t\t\t\t-----------------------------------------" << endl;
        getchar();

        int quantity, choice, day;

        do
        {
            cout << "enter the number which book do you want to get" << endl;
            cout << "\n1.c++ \n2.c\n3.dms\n4.cgr\n5.java\n6.exit" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "enter how many quantity do you want to get" << endl;
                cin >> quantity;

                if (quantity > book1)
                {
                    cout << quantity << " quantity not avaliable ......" << endl;
                }
                else
                {
                    cout << "enter how many days do you want to get" << endl;
                    cin >> day;
                    cout << "you choose c++ book and quantity :" << quantity << endl;
                    cout << "data inserted sucessfully.....!" << endl;
                    book1 = book1 - quantity;
                    cpp = cpp + quantity;
                    day1 = day1 + day;
                }
                break;
            case 2:
                cout << "enter how many quantity do you want to get" << endl;
                cin >> quantity;

                if (quantity > book2)
                {
                    cout << quantity << " quantity not avaliable ......" << endl;
                }
                else
                {
                    cout << "enter how many days do you want to get" << endl;
                    cin >> day;
                    cout << "you choose c book and quantity :" << quantity << endl;
                    cout << "data inserted sucessfully.....!" << endl;
                    book2 = book2 - quantity;
                    c = c + quantity;
                    day2 = day2 + day;
                }
                break;
            case 3:
                cout << "enter how many quantity do you want to get" << endl;
                cin >> quantity;

                if (quantity > book3)
                {
                    cout << quantity << " quantity not avaliable ......" << endl;
                }
                else
                {
                    cout << "enter how many days do you want to get" << endl;
                    cin >> day;
                    cout << "you choose dms book and quantity :" << quantity << endl;
                    cout << "data inserted sucessfully.....!" << endl;
                    book3 = book3 - quantity;
                    dms = dms + quantity;
                    day3 = day3 + day;
                }
                break;
            case 4:
                cout << "enter how many quantity do you want to get" << endl;
                cin >> quantity;

                if (quantity > book4)
                {
                    cout << quantity << " quantity not avaliable ......" << endl;
                }
                else
                {
                    cout << "enter how many days do you want to get" << endl;
                    cin >> day;
                    cout << "you choose cgr book and quantity :" << quantity << endl;
                    cout << "data inserted sucessfully.....!" << endl;
                    book4 = book4 - quantity;
                    cgr = cgr + quantity;
                    day4 = day4 + day;
                }
                break;
            case 5:
                cout << "enter how many quantity do you want to get" << endl;
                cin >> quantity;

                if (quantity > book5)
                {
                    cout << quantity << " quantity not avaliable ......" << endl;
                }
                else
                {
                    cout << "enter how many days do you want to get" << endl;
                    cin >> day;
                    cout << "you choose java book and quantity :" << quantity << endl;
                    cout << "data inserted sucessfully.....!" << endl;
                    book5 = book5 - quantity;
                    java = java + quantity;
                    day5 = day5 + day;
                }
                break;
            case 6:
                getchar();
                break;
            default:
                cout << "invalid input " << endl;
                break;
            }
        } while (choice != 6);
    }

    void displaybook()
    {
        getchar();
        cout << "you get the book....................." << endl;
        cout << "======================================" << endl;
        cout << "NAME :   ||  QUANTITY   ||  NO. OF DAYS ||" << endl;
        cout << " c++ :   ||     " << cpp << "       ||days :" << day1 << endl;
        cout << " c :     ||     " << c << "       ||  days :" << day2 << endl;
        cout << " dms :   ||     " << dms << "       ||  days :" << day3 << endl;
        cout << " cgr :   ||     " << cgr << "       ||  days :" << day4 << endl;
        cout << " java :  ||     " << java << "       ||  days :" << day5 << endl;
    }

    void return_book()
    {
        system("cls");
        int quantity, choice;
    A:
        cout << "enter the choice do you want to return the books" << endl;
        cout << "\n1.c++ \n2.c\n3.dms\n4.cgr\n5.java\n6.exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:

            if (cpp == 0) // for checking user get a book or not
            {
                cout << "you do not get any book so how you can return the book" << endl
                     << "please enter the right choice !!!!" << endl;
                goto A;
            }
        samarth:
            cout << "how many quantity of cpp books do you want to return" << endl;
            cin >> quantity;
            if (quantity > cpp)
            {
                cout << "you do not get " << quantity << " so how you can return " << quantity << " quantity" << endl;
                goto samarth;
            }
            else if (quantity <= 0)
            {
                cout << "not possible !!" << endl;
                goto samarth;
            }
            else
            {
                book1 = book1 + quantity;
                cpp = cpp - quantity;
                goto A;
            }

            break;
        case 2:

            if (c == 0) // for checking user get a book or not
            {
                cout << "you do not get any book so how you can return the book" << endl
                     << "please enter the right choice !!!!" << endl;
                goto A;
            }
        sam:
            cout << "how many quantity of c books do you want to return" << endl;
            cin >> quantity;
            if (quantity > c)
            {
                cout << "you do not get " << quantity << " so how you can return " << quantity << " quantity" << endl;
                goto sam;
            }
            else if (quantity <= 0)
            {
                cout << "not possible !!" << endl;
                goto sam;
            }
            else
            {
                book2 = book2 + quantity;
                c = c - quantity;
                goto A;
            }

            break;
        case 3:

            if (dms == 0) // for checking user get a book or not
            {
                cout << "you do not get any book so how you can return the book" << endl
                     << "please enter the right choice !!!!" << endl;
                goto A;
            }
        S:
            cout << "how many quantity of dms books do you want to return" << endl;
            cin >> quantity;
            if (quantity > dms)
            {
                cout << "you do not get " << quantity << " so how you can return " << quantity << " quantity" << endl;
                goto S;
            }
            else if (quantity <= 0)
            {
                cout << "not possible !!" << endl;
                goto S;
            }
            else
            {
                book3 = book3 + quantity;
                dms = dms - quantity;
                goto A;
            }

            break;
        case 4:

            if (cgr == 0) // for checking user get a book or not
            {
                cout << "you do not get any book so how you can return the book" << endl
                     << "please enter the right choice !!!!" << endl;
                goto A;
            }
        SJ:
            cout << "how many quantity of cgr books do you want to return" << endl;
            cin >> quantity;
            if (quantity > cgr)
            {
                cout << "you do not get " << quantity << " so how you can return " << quantity << " quantity" << endl;
                goto SJ;
            }
            else if (quantity <= 0)

                        {
                cout << "not possible !!" << endl;
                goto SJ;
            }
            else
            {
                book4 = book4 + quantity;
                cgr = cgr - quantity;
                goto A;
            }

            break;
        case 5:

            if (java == 0) // for checking user get a book or not
            {
                cout << "you do not get any book so how you can return the book" << endl
                     << "please enter the right choice !!!!" << endl;
                goto A;
            }
        sa:
            cout << "how many quantity of java books do you want to return" << endl;
            cin >> quantity;
            if (quantity > java)
            {
                cout << "you do not get " << quantity << " so how you can return " << quantity << " quantity" << endl;
                goto sa;
            }
            else if (quantity <= 0)
            {
                cout << "not possible !!" << endl;
                goto sa;
            }
            else
            {
                book5 = book5 + quantity;
                java = java - quantity;
                goto A;
            }

            break;
        case 6:
            break;
        default:
            getchar();
            cout << "invalid input" << endl;
            break;
        }
    }
};
int book::book1 = 5;
int book::book2 = 5;
int book::book3 = 5;
int book::book4 = 5;
int book::book5 = 5;

struct node
{
    book e;
    struct node *next;
};
struct node *insertatend(struct node *head)
{
    if (head == NULL)
    {
        head = new struct node;
        head->e.getdata();
        head->next = NULL;
        return head;
        getchar();
    }
    else
    {
        struct node *p;
        struct node *ptr = new struct node;
        ptr->e.getdata();
        ptr->next = NULL;
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = ptr;
        return head;
    }
}
struct node *display(struct node *head, int search)
{
    struct node *p;
    p = head;
    while (p != NULL)
    {
        if (p->e.id == search)
        {
            string pass;
        pa:
            cout << "enter your password\n";
            cin >> pass;
            if (p->e.password == pass)
            {
                p->e.putdata();
                break;
            }
            else
            {
                cout << "incorrect password !" << endl;
                goto pa;
            }
        }

        p = p->next;
    }
    if (p == NULL)
    {
        cout << "no data found....." << endl;
        getchar();
    }
}
struct node *edit(struct node *head, int search)
{
    struct node *p;
    p = head;
    while (p != NULL)
    {
        if (p->e.id == search)
        {
            string pass; // temperary variable for store the password
        pa:
            cout << "enter your password\n";
            cin >> pass;
            if (p->e.password == pass)
            {
                p->e.edit();
                break;
            }
            else
            {
                cout << "incorrect password !" << endl;
                goto pa;
            }
        }
        p = p->next;
        if (p == NULL)
        {
            cout << "no data found........." << endl;
            getchar();
        }
    }
}

struct node *avaliable(struct node *head)
{
    struct node *p;
    p = head;

    p->e.books_avaliable();
}
struct node *get(struct node *head, int search)
{
    struct node *p;
    p = head;

    while (p != NULL)
    {
        if (p->e.id == search)
        {
            string pass;
        pa:
            cout << "enter your password\n";
            cin >> pass;
            if (p->e.password == pass)
            {
                p->e.get_book();
                break;
            }

            else
            {
                cout << "incorrect password !" << endl;
                goto pa;
            }
        }
        p = p->next;
    }
    if (p == NULL)
    {
        cout << "id not found..................." << endl;
        cout << "if you are not register your name in this library then please first register your detalis\n\n";
        getchar();
    }
}
struct node *ret(struct node *head, int search)
{
    struct node *p;
    p = head;
    while (p != NULL)
    {
        if (p->e.id == search)
        {
            string pass;
        pa:
            cout << "enter your password\n";
            cin >> pass;
            if (p->e.password == pass)
            {
                p->e.displaybook();
                p->e.return_book();
                break;
            }
            else
            {
                cout << "incorrect password !" << endl;
                goto pa;
            }
        }

        p = p->next;
    }
    if (p == NULL)
    {
        cout << "id not found..................." << endl;
        cout << "if you are not register your name in this library then please first register your detalis\n\n";
        getchar();
    }
}
int main()

{

    int choice, search;

    struct node *head;
    head = NULL;
    system("cls");
    cout << "\t\t\t\t\t\t\t\t\t\t\t **************************" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t LIBRARY MANAGEMENT SYSTEM " << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t **************************" << endl;
    getchar();
    system("cls");
    cout << "\t\t\t\t\t\t\t\t\t\t\t -------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t   WEL-COME IN SAMARTH LIBRARY  " << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t -------------------------------" << endl;
    getchar();
    system("cls");
    do
    {
        // cout << "enter any button" << endl;
        getchar();
        system("cls");
        cout << "\n1.new entry\n2.display details\n3.edit the data\n4.books avaliable\n5.get book\n6.return book\n7.visit to google\n8.exit\n"
             << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("cls");
            head = insertatend(head);
            break;
        case 2:
            system("cls");
            cout << "enter the id of student which do you want to display" << endl;
            cin >> search;
            display(head, search);
            break;
        case 3:
            system("cls");
            cout << "enter the id of student which do you want to EDIT" << endl;
            cin >> search;
            edit(head, search);
            break;
        case 4:
            system("cls");
            avaliable(head);
            break;
        case 5:
            system("cls");
            cout << "enter your id :" << endl;
            cin >> search;
            get(head, search);
            break;
        case 6:
            system("cls");
            cout << "enter your id :" << endl;
            cin >> search;
            ret(head, search);
            break;
        case 7:
            system("start www.google.com");
            break;
        case 8:
            system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tTHANK YOU ........!!" << endl;
            return 0;
        default:
            cout << "invalid input\n";
            getchar();
            break;
        }
    } while (choice != 7);

    return 0;
}