class Book{
    static int totalNoBooks;
    String title;
    String author;
    String isbn;
    boolean bookBorrowed;

    static{
        totalNoBooks=0;
    }

    Book(String isbn,String title,String author){
        this.isbn = isbn;
        this.title = title;
        this.author = author;
    }

    Book(String isbn){
        this.isbn = isbn;
    }

     static int totalNoBooks(){
        return totalNoBooks;

     }

     void borrowed(){
        if(bookBorrowed){
            System.out.println("Book is already borrowed");
        }
        else{
            bookBorrowed=true;
            System.out.println("Enjoy a book ");
        }
    }
     void returnBook(){

     }


}


