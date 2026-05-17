from setuptools import find_packages, setup

package_name = 'ascend_bringup'

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
    description='Launch files and mission state machine for ASCEND',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'mission_state_machine = ascend_bringup.mission_state_machine:main',
        ],
    },
)
