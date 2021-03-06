#--
#	Rubygame -- Ruby code and bindings to SDL to facilitate game creation
#	Copyright (C) 2004-2008  John Croisant
#
#	This library is free software; you can redistribute it and/or
#	modify it under the terms of the GNU Lesser General Public
#	License as published by the Free Software Foundation; either
#	version 2.1 of the License, or (at your option) any later version.
#
#	This library is distributed in the hope that it will be useful,
#	but WITHOUT ANY WARRANTY; without even the implied warranty of
#	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
#	Lesser General Public License for more details.
#
#	You should have received a copy of the GNU Lesser General Public
#	License along with this library; if not, write to the Free Software
#	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
#++

module Rubygame

class BlockAction
	def initialize( &block )
		raise ArgumentError, "BlockAction needs a block" unless block_given?
		@block = block
	end
	
	def perform( owner, event )
		@block.call( owner, event )
	end
end

class MethodAction
	def initialize( method_name, pass_event=true )
		@method_name = method_name
		@pass_event = pass_event
	end
	
	def perform( owner, event )
		method = owner.method(@method_name)
		@pass_event ? method.call( event ) : method.call()
	rescue ArgumentError => s
		begin
			# Oops! Try again, without any argument.
			method.call()
		rescue ArgumentError
			# That didn't work either. Raise the original error.
			raise s
		end
	end
end

class MultiAction
	def initialize( *actions )
		@actions = actions
	end
	
	def perform( owner, event )
		@actions.each { |action| action.perform( owner, event ) }
	end
end

end
