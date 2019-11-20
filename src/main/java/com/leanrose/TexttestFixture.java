package com.leanrose;

public class TexttestFixture {
    public static void main(String[] args) {
        System.out.println("BZZ ZZZ!");

        Battery[] batteries = new Battery[] { //
                new Battery("Samsung Lithium-ion", 10, 20), //
                new Battery("Budget Nickel Cadmium", 5, 7)}; //

        ElectricRose app = new ElectricRose(batteries);

        int times = 2;
        if (args.length > 0) {
            times = Integer.parseInt(args[0]) + 1;
        }

        for (int i = 0; i < times; i++) {
            System.out.println("-------- usage " + i + " --------");
            System.out.println("type, usages, charge");
            for (Battery battery : batteries) {
                System.out.println(battery);
            }
            System.out.println();
            app.updateCharge();
        }
    }

}
