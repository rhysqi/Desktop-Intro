# Meson setup configuration
project('RayLib', 'c',
	version : '1.0',
	default_options: ['c_std=c2x']
)

# Global Arguments
global_include_args = ['-I/usr/local/include']
global_link_args = ['-L/usr/local/lib']
global_compile_args_1 = ['-fno-strict-aliasing', '-fstack-protector-strong', '-fvectorize', '-fslp-vectorize', '-flto' ]
global_compile_args_2 = ['-pthread', '-O2', '']

# Adding Arguments
add_global_arguments(global_include_args, language : 'c')
add_global_arguments(global_link_args, language : 'c')
add_global_arguments(global_compile_args_1, language : 'c')
add_global_arguments(global_compile_args_2, language : 'c')


# Adding Dependencies
RayLib = dependency('raylib')

executable('Program', 'src/main.c', dependencies : RayLib)
