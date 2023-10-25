#ifndef packageReductionDiscount_hpp

class PackageReductionDiscount : public Command {
public:
    PackageReductionDiscount(int id, std::string date, std::string client, std::vector<Article> articles) : Command(id, date, client, articles) {}

    double get_total_price() {
        double total = Command::get_total_price();
        if(total > 150.0) {
            return total - 10.0;
        }
        return total;
    }
};

#endif