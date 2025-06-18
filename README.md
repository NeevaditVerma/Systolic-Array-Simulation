# Systolic-Array-Simulation
# Systolic Array Matrix Multiplication

This project simulates **matrix multiplication using a systolic array architecture** with time-step based computation logging. The implementation is written in C++ and adheres to the constraints and output format specified in the assignment.

---

## 🛠️ Features

- Simulates a **MxN systolic array** for matrix multiplication.
- Handles input matrices of dimensions `p × q` and `q × r`.
- Logs each **element-wise multiplication operation** at every time step.
- Generates an output file with results in the required format and naming convention.

---

## 🧾 Input Format

The program is executed from the command line with the following arguments:

```bash
./programbinary M N p q r
