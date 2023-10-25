#include <iostream>
#include <vector>
#include <string>

class Article {
public:
    Article(const std::string& name, double price, int quantity) : name(name), price(price), quantity(quantity) {}

    std::string name;
    double price;
    int quantity;
};

class Command {
public:
    Command(int id, std::string date, std::string client, std::vector<Article> articles) : id(id), date(date), client(client), articles(articles) {}

    double get_total_price() {
        double total = 0.0;
        for (std::vector<Article>::const_iterator it = articles.begin(); it != articles.end(); ++it) {
            const Article& article = *it;
            total += article.price * article.quantity;
        }
        return total;
    }

protected:
    int id;
    std::string date;
    std::string client;
    std::vector<Article> articles;

};
