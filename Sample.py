import glob,os

class File(object):
    def __init__(self,path):
        self.path = path

    def fileName(self):
        return os.path.basename(self.path)

class FileBlock(object):
    def __init__(self,name,dir,flist=[],divider="_"):
        self.name = name
        self.dir = dir
        self.flist = flist
        self.divider = divider

    def makeFileList(self):
        if "*" not in self.dir:
            return [File(os.path.join(self.dir,f)) for f in self.flist]
        else:
            tempList = []
            for d in glob.glob(self.dir):
                tempList.extend([File(os.path.join(d,f)) for f in os.listdir(d)])
            return tempList

class Sample(object):
    '''Base class. The attributes are used to store parameters of any type'''
    def __init__(self,name,**kwargs):
        self.name = name

        '''All keyword arguments are added as attributes.'''
        self.__dict__.update( kwargs )
        pass

    def __str__(self):
        '''A useful printout'''
        header = '{type}: {name}'.format( type=self.__class__.__name__, name=self.name)
        varlines = ['\t{var:<15}:   {value}'.format(var=var, value=value) \
                    for var,value in sorted(vars(self).iteritems()) \
                    if var is not 'name']
        all = [ header ]
        all.extend(varlines)
        return '\n'.join( all )#

    def makeFileList(self):
        return [File(p) for p in glob.glob(self.dir_path+"*.root")]
        #return [glob.glob(dir_path+".root") for dir_path in self.dir_paths]
