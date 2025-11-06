#include"Function.h"

int main() {
    // Tao cac don hang le
    SingleOrder* order1 = new SingleOrder("Product 1", 2, 10);
    SingleOrder* order2 = new SingleOrder("Product 2", 1, 20);

    // Tao 1 don hang phuc tap va them cac don hang vao
    CompositeOrder* compositeOrder = new CompositeOrder("Box 1", 0, 0);
    compositeOrder->addOrder(order1);
    compositeOrder->addOrder(order2);

    int totalCost = compositeOrder->totalCost();
    cout << "Total cost of the composite order: " << totalCost << endl;

    compositeOrder->removeOrder(order1);

    // Tong chi phi sau khi loai bo don hang
    totalCost = compositeOrder->totalCost();
    cout << "Total cost after removing an order: " << totalCost << endl;

    delete order1;
    delete order2;
    delete compositeOrder;

    return 0;
}