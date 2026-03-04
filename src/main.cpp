
#warning "Using version, with stupid options parsing"
import compiler;

int main(int argc, char* argv[])
{
    compiler::compile(argv[1]/* = .ast.json */, /* argv[2] = -o , */ argv[3] /* = executable */);

    return 0;
}