from distutils.core import setup
setup(name='utbspendfrom',
      version='1.0',
      description='Command-line utility for fatbit "coin control"',
      author='Gavin Andresen',
      author_email='gavin@fatbitfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
