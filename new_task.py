import click
from shutil import copy
from pathlib import Path


@click.command()
@click.option('--task', prompt='Task name', help='Task name')
def create_task(task: str):
    template = Path('template')
    destination = Path("problems/" + task)

    if destination.exists():
        print('Sorry, this task has already been created')
        exit()

    destination.mkdir()
    assert destination.exists()

    for file in template.iterdir():
        copy(file, destination)
        print(' - copied ', file)

    print('Task', task, 'created')

    with open('CMakeLists.txt', 'r+') as f:
        cmake_content = f.readlines()
        assert cmake_content[4].startswith('set')
        cmake_content[4] = f'set(PROBLEM_NAME "{task}")\n'

    with open('CMakeLists.txt', 'w') as f:
        f.writelines(cmake_content)

    print('CMakeLists.txt overwritten')


if __name__ == '__main__':
    create_task()
