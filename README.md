git submodule --init --recursive

mkdir build && cd build && cmake .. && make && ./carzone




This will build the project and run it against a sample URL. It prints the
response code which should be 200.
