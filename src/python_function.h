#ifndef SO_PYTHON_FUNCTION_H
#define SO_PYTHON_FUNCTION_H
#include <python_object.h>

namespace so
{
class Python_function
{
public:
  Python_function(so::Python_object module, std::string name)
    :
  {

  }

private:
  /**
   * @brief m_func The stored function
   */
  PyObject* m_func;
}
}
#endif