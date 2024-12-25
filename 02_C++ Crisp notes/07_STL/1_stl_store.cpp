#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

// Structure to represent a product in the inventory
struct Product {
    int productID;      
    string name;        
    string category;    
};

// Structure to represent an order made by a customer
struct Order {
    int orderID;        
    int ProductID;      
    int quantity;       
    string customerID;  
    time_t orderDate;   // Date and time the order was placed
};

int main() {
    // A vector to store products in the inventory
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "Coffe Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk lamp", "Home"},
    };

cout << "Products:\n";
    for (const auto &product : products) {
        cout << "ID: " << product.productID << ", Name: " << product.name 
             << ", Category: " << product.category << endl;
    }

    // Deque of recent customers
    deque<string> recentCustomers = {"C001", "C002", "C003"};
    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    cout << "\nRecent Customers:\n";
    for (const auto &customer : recentCustomers) {
        cout << customer << " ";
    }
    cout << endl;

    // List of orders
    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    cout << "\nOrder History:\n";
    for (const auto &order : orderHistory) {
        cout << "Order ID: " << order.orderID << ", Product ID: " << order.ProductID
             << ", Quantity: " << order.quantity << ", Customer ID: " << order.customerID
             << ", Order Date: " << ctime(&order.orderDate);
    }

    // Set of unique product categories
    set<string> categories;
    for (const auto &product : products) {
        categories.insert(product.category);
    }

    cout << "\nProduct Categories:\n";
    for (const auto &category : categories) {
        cout << category << endl;
    }

    // Map of product stock
    map<int, int> productStock = {
        {101, 10}, {102, 20}, {103, 15}, {104, 5}, {105, 7},
    };

    cout << "\nProduct Stock:\n";
    for (const auto &stock : productStock) {
        cout << "Product ID: " << stock.first << ", Stock: " << stock.second << endl;
    }

    // Multimap of customer orders
    multimap<string, Order> customerOrders;
    for (const auto &order : orderHistory) {
        customerOrders.insert({order.customerID, order});
    }

    cout << "\nCustomer Orders:\n";
    for (const auto &entry : customerOrders) {
        cout << "Customer ID: " << entry.first << ", Order ID: " << entry.second.orderID 
        << ", Product ID: " << entry.second.ProductID << ", Quantity: " << entry.second.quantity << endl;
    }

    // Unordered map of customer data
    unordered_map<string, string> customerData = {
        {"C001", "Alice"}, {"C002", "Hitesh"}, {"C003", "Vidya"}, {"C004", "Max"}, {"C005", "Harry"},
    };

    cout << "\nCustomer Data:\n";
    for (const auto &entry : customerData) {
        cout << "Customer ID: " << entry.first << ", Name: " << entry.second << endl;
    }

    // Unordered set of unique product IDs
    unordered_set<int> uniqueProductIDs;
    for (const auto &product : products) {
        uniqueProductIDs.insert(product.productID);
    }

    cout << "\nUnique Product IDs:\n";
    for (const auto &productID : uniqueProductIDs) {
        cout << productID << " ";
    }
    cout << endl;

    return 0;
}
