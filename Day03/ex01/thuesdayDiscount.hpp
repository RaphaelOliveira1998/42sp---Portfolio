#ifndef thuesdayDiscount_hpp

class ThuesdayDiscountCommand : public Command {
public:
    ThuesdayDiscountCommand(int id, std::string date, std::string client, std::vector<Article> articles) : Command(id, date, client, articles) {}


    double get_total_price() {
        double total = Command::get_total_price();
        if(date == "Thuesday") {
            return total * 0.9;
        }
        return total;
    }
};

#endif