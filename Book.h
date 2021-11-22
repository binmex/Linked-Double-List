//
// Created by Binmex on 22/11/2021.
//

#ifndef LINKEDDOUBLE_BOOK_H
#define LINKEDDOUBLE_BOOK_H

#include "string"

class Book {
public:
    Book();

    Book(const std::string &id, const std::string &title, const std::string &author, short pages);

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getTitle() const;

    void setTitle(const std::string &title);

    const std::string &getAuthor() const;

    void setAuthor(const std::string &author);

    short getPages() const;

    void setPages(short pages);

    virtual ~Book();

private:
    std::string id;
    std::string title;
    std::string author;
    short pages;

};


#endif //LINKEDDOUBLE_BOOK_H
