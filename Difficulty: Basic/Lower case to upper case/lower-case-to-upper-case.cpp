
string to_upper(string str) {
    // code
    for(int i=0;i<str.size();i++){
        char c=str[i]-32;
        str[i]=c;
    }
    return str;
}