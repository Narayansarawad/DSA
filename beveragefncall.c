//Function Prototype
float total_bill (char type,int quantity);
int main()
{
    int quantity;
    char type;
    float bill;
    printf("Enter type of beverage and quantity\n");
    scanf("%c%d",&type,&quantity);
    if(type=='B'||type=='c'||type=='s'||type=='M')
    {
        //Function Call
        bill=total_bill(type,quantity);
        printf("Total bill is\n",bill);
    }
    else
        printf("Invalid input for type of beverages\n");
    return 0;
}
//Function Definition
float total_bill (char type,int quantity)
{
    float bill;
    switch(type)
    {
        case 'B':bill=25*quantity+1;
                break;
        case 'C':bill=30*quantity+1;
                break;
        case 'S':bill=50*quantity+1;
                break;
        case 'M':bill=45*quantity+1;
                break;
    }
    return bill;
}
