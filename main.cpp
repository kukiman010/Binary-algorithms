long long int Packer::binaryToDecimal(QString n)
{
    QString num = n;
    long long int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    long long int base = 1;

    long long int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    long long int c= 4616687675601289216;
    bitset<64> bi(c);
    //cout<<sizeof(bi)<<"   \n"<<bi<<"\n";
    QString str="";
    for(int i=63;0<=i;i--)
    {
        //str+= to_string(bi[i]);
        str+= QString::number(bi[i]);
    }
    qDebug()<<str<<"\n\n";

    //long long int gg = binaryToDecimal(str);
    cout<<gg<<"\n"<<c;
    
    
//    char a='b';
//    bitset<8>binarya(a);
//    cout<<(char)binarya.to_ulong()<<endl;
//    system("pause");
//    return  0;
    
    string str ="45";// из строки в число
    int b=0;
    b=stoi(str);
    cout<<b<<"\n";
    
    return a.exec();
}
