
// Write your MyBook class here
class MyBook: public Book
{
    int price;
    public:
    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    MyBook(string title, string author, int price): Book(title, author), price(price){}
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
// End class
};
