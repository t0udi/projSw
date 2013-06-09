env = Environment()
# Add header search path
env.Append(CPPPATH = ['/usr/include', '/usr/local/include'])

# Add compile-time flags
env.Append(CCFLAGS=['-Wall','-g', '-pedantic'])

# libraries to link against
# Notice you dont need the '-l', since SCons is platform independent
#env.Append(LIBS=])

#env.Append(CXXFLAGS="-std=c++11")

# Add library search path
env.Append(LIBPATH = ['/usr/lib','/usr/local/lib', '/opt/lib'])

# Compile and link the binary
env.Program('prog',['swus.c', 'lcgrand.h', 'lcgrand.c'])
