#warning "Using version, with stupid options parsing"

#include <iostream>
#include <exception>

import compiler;

int main(int argc, char* argv[]) try
{
    if (argc == 2)
        compiler::compile(argv[1], "a.out");
    else
        compiler::compile(argv[1]/* = .ast.json */, /* argv[2] = -o , */ argv[3] /* = executable */);

    return 0;
}
catch (std::exception const & e)
{
    std::cerr << "Exception cathched: " << e.what() << "\n";
    return 1;
}
catch (...)
{
    std::cerr << "Undefined exceptions catched.\n";
    return 1;
}