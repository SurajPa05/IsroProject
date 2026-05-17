from setuptools import find_packages, setup

package_name = 'ascend_navigation'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='tnh',
    maintainer_email='tnh@todo.todo',
    description='Navigation nodes for ASCEND',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'coverage_planner = ascend_navigation.coverage_planner:main',
        ],
    },
)
